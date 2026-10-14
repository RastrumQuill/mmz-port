// sub_080B2D14 at 0x080B2D14 (thumb)

undefined4 sub_080B2D14(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((iVar2 != 0) && (*(byte *)(iVar2 + 0xc) < 2)) {
    if (*(char *)(iVar2 + 8) == '\x03') {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
      *(undefined4 *)(iVar2 + 0x90) = 0;
      *(undefined *)(iVar2 + 0x94) = 0;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
      piVar1 = (int *)(&DAT_0885a604 + (uint)*(byte *)(iVar2 + 9) * 4);
      *(undefined4 *)(iVar2 + 0xc) = 3;
    }
    else {
      if (*(char *)(iVar2 + 8) != '\x06') goto LAB_080b2d9a;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
      *(undefined4 *)(iVar2 + 0x90) = 0;
      *(undefined *)(iVar2 + 0x94) = 0;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
      piVar1 = (int *)(&DAT_08865dc4 + (uint)*(byte *)(iVar2 + 9) * 4);
      *(undefined4 *)(iVar2 + 0xc) = 3;
    }
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
LAB_080b2d9a:
  sub_0807F804(param_1);
  return in_lr;
}

