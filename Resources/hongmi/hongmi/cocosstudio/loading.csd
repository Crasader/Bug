<GameProjectFile>
  <PropertyGroup Type="Scene" Name="loading" ID="a2ee0952-26b5-49ae-8bf9-4f1d6279b798" Version="2.1.5.0" />
  <Content ctype="GameProjectContent">
    <Content>
      <Animation Duration="0" Speed="1.0000" />
      <ObjectData Name="loadingscene" FrameEvent="" RightMargin="-960.0000" TopMargin="-640.0000" ctype="SingleNodeObjectData">
        <Position X="0.0000" Y="0.0000" />
        <Scale ScaleX="1.0000" ScaleY="1.0000" />
        <AnchorPoint />
        <CColor A="255" R="255" G="255" B="255" />
        <Size X="960.0000" Y="640.0000" />
        <PrePosition X="0.0000" Y="0.0000" />
        <PreSize X="0.0000" Y="0.0000" />
        <Children>
          <NodeObjectData Name="background" ActionTag="953446860" FrameEvent="" Tag="5" RightMargin="-1098.0000" TopMargin="-39.9669" BottomMargin="-40.0331" ctype="SpriteObjectData">
            <Position X="0.0000" Y="319.9669" />
            <Scale ScaleX="0.8571" ScaleY="0.8626" />
            <AnchorPoint ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="2058.0000" Y="720.0000" />
            <PrePosition X="0.0000" Y="0.4999" />
            <PreSize X="0.0000" Y="0.0000" />
            <FileData Type="PlistSubImage" Path="comic-background.png" Plist="comic.plist" />
          </NodeObjectData>
          <NodeObjectData Name="skip" ActionTag="1540150263" FrameEvent="" Tag="17" LeftMargin="761.9985" RightMargin="152.0015" TopMargin="545.1791" BottomMargin="58.8209" TouchEnable="True" FontSize="14" ButtonText="" Scale9Enable="True" Scale9Width="206" Scale9Height="94" ctype="ButtonObjectData">
            <Position X="784.9985" Y="76.8209" />
            <Scale ScaleX="2.5010" ScaleY="1.3527" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="46.0000" Y="36.0000" />
            <PrePosition X="0.8177" Y="0.1200" />
            <PreSize X="0.0000" Y="0.0000" />
            <TextColor A="255" R="65" G="65" B="70" />
            <DisabledFileData Type="PlistSubImage" Path="comic-skip.png" Plist="comic.plist" />
            <PressedFileData Type="PlistSubImage" Path="comic-skip.png" Plist="comic.plist" />
            <NormalFileData Type="PlistSubImage" Path="comic-skip.png" Plist="comic.plist" />
          </NodeObjectData>
          <NodeObjectData Name="LoadingBar" ActionTag="497686394" Alpha="208" FrameEvent="" Tag="28" LeftMargin="250.8331" RightMargin="509.1669" TopMargin="564.6666" BottomMargin="61.3334" ProgressInfo="79" ctype="LoadingBarObjectData">
            <Position X="350.8331" Y="68.3334" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="197" B="7" />
            <Size X="200.0000" Y="14.0000" />
            <PrePosition X="0.3655" Y="0.1068" />
            <PreSize X="0.0000" Y="0.0000" />
            <ImageFileData Type="Default" Path="Default/LoadingBarFile.png" />
          </NodeObjectData>
        </Children>
      </ObjectData>
    </Content>
  </Content>
</GameProjectFile>