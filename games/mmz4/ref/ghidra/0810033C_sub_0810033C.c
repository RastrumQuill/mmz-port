// sub_0810033C at 0x0810033C (thumb)

undefined4 sub_0810033C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_0202dbf0;
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xd) != '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined *)(iVar1 + 0xbe) = 0;
    }
    else {
      *(undefined *)(iVar1 + 0xbf) = 0;
    }
    sub_080D53B8(0,0xff);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08100398(param_1);
  }
  return in_lr;
}

