// sub_08023CA8 at 0x08023CA8 (thumb)

undefined4 sub_08023CA8(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0xc0);
  if (*pcVar2 == '\x04') {
    cVar1 = sub_08018254();
    if (cVar1 == '\0') {
      if ((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 2) == 0) {
        *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
        *(undefined *)(param_1 + 0xbf) = 4;
        *(char *)(param_1 + 0xc3) = *pcVar2;
        *pcVar2 = '\x04';
        sub_08018BE8(param_1,0x6d);
      }
    }
    else {
      *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
      *(undefined *)(param_1 + 0xbf) = 2;
      *(char *)(param_1 + 0xc3) = *pcVar2;
      *pcVar2 = '\x04';
    }
  }
  else if ((byte)(*(char *)(param_1 + 0x73) - 3U) < 2) {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 4;
    *(char *)(param_1 + 0xc3) = *pcVar2;
    *pcVar2 = *pcVar2;
    sub_08018BE8(param_1,*(byte *)(param_1 + 0x115) + 1);
  }
  return in_lr;
}

