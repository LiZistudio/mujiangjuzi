public class ARVideoTarget: ARTargetBase//类ARVideoTarget用于实现播放南音视频 
{
//定义公有与私有成员变量 
public MediaPlayerCtrl mediaPlayerCtrl;
//自定义播放器 
public MeshRenderer videoMeshRenderer;
//视频渲染器 
public string videoStr;
//用于访问视频的视频字符串
 private Vector3 videoScale;
//视频缩放比例 
void Awake() 
{//对播放器进行设置 
mediaPlayerCtrl.OnEnd+=VideoOnEnd;
mediaPlayerCtrl.OnVideoFirstFrameReady+=VideoFirstFrameReady; 
mediaPlayerCtrl.OnResize+=VideoOnResize;
videoScale= mediaPlayerCtrl.transform.localScale;
}
 private void VideoOnResize() 
{//设置视频缩放比例 
mediaPlayerCtrl.transform.localScale = videoScale;
} 
private void VideoFirstFrameReady() 
{//打开视频渲染器 
videoMeshRenderer.enabled = true;
} 
private void VideoOnEnd()
 {//结束视频播放
 mediaPlayerCtrl.Stop(); 
 mediaPlayerCtrl.UnLoad();
 videoMeshRenderer.enabled = false;
 } 
public override void OnTrackingFound() 
{//发现AR目标时，载入视频 
 mediaPlayerCtrl.Load(videoStr);
}
 public override void OnTrackingLost() 
{//丢失AR目标时，结束视频播放
 VideoOnEnd(); 
}
}
