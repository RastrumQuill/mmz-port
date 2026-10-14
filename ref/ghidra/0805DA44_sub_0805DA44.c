// sub_0805DA44 at 0x0805DA44 (thumb)

undefined4 sub_0805DA44(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((*(byte *)(iVar2 + 0xc) < 2) || ((DAT_02022b64 & 8) == 0)) {
    if (*(char *)(iVar2 + 0x13) == '\0') {
      sub_08001904(0x78,0);
    }
    else {
      sub_08001904(0x79,0);
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (*(byte *)(iVar2 + 0xf) < 2) {
      return in_lr;
    }
    sub_08005214((DAT_02004f38 & 0x1f00) * 8 + 0x6000000);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    uVar1 = *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  else {
    sub_08005214((DAT_02004f38 & 0x1f00) * 8 + 0x6000000);
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar1 = *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return in_lr;
}

