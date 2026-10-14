// sub_08117C68 at 0x08117C68 (thumb)

undefined8 sub_08117C68(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xe04) == '\0') && ((DAT_02000764 & 2) != 0)) {
    *(undefined *)(param_1 + 1) = 3;
    *(undefined *)(param_1 + 2) = 3;
  }
  else {
    if ((DAT_02000764 & 0x200) == 0) {
      if ((DAT_02000764 & 0x100) == 0) {
        uVar2 = 0;
        goto LAB_08117d0a;
      }
      *(byte *)(param_1 + 0xdf9) = *(char *)(param_1 + 0xdf8) + 1U & 3;
      *(undefined *)(param_1 + 2) = 0;
      bVar1 = *(byte *)(param_1 + 0xdf9);
    }
    else {
      *(byte *)(param_1 + 0xdf9) = *(char *)(param_1 + 0xdf8) + 3U & 3;
      *(undefined *)(param_1 + 2) = 0;
      bVar1 = *(byte *)(param_1 + 0xdf9);
    }
    sub_08128884(param_1,*(undefined4 *)(&DAT_08885dac + (uint)bVar1 * 4));
    sub_08002B10(0x33);
  }
  uVar2 = 1;
LAB_08117d0a:
  return CONCAT44(in_lr,uVar2);
}

