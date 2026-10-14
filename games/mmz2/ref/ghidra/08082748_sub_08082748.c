// sub_08082748 at 0x08082748 (thumb)

undefined4 sub_08082748(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6e00);
    sub_08006E08(param_1 + 0x74,&DAT_083410e8);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    if ((uVar2 * 2 >> 0x11 & 7) == 0) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar3 = -0xc00;
      }
      else {
        iVar3 = 0xc00;
      }
      sub_080AC8A4(*(int *)(param_1 + 0x54) + iVar3,*(undefined4 *)(param_1 + 0x58),0);
    }
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_08083EA0(param_1);
  }
  return in_lr;
}

