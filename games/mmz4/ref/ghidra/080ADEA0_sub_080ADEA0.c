// sub_080ADEA0 at 0x080ADEA0 (thumb)

undefined4 sub_080ADEA0(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x5dfd) {
      iVar2 = param_1 + 0x54;
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(iVar2,&DAT_0885fa40,0,(uVar3 * 2 >> 0x11 & 1) << 4);
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(iVar2,&DAT_0885fa5c,0,(uVar3 * 2 >> 0x11 & 1) << 4);
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(iVar2,&DAT_0885fa78,0,(uVar3 * 2 >> 0x11 & 1) << 4);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_080adfc2;
    }
    sub_0801CF00(param_1,0xa201);
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08002B10(0x131);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 1) == 0) {
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    sub_080D4898(param_1 + 0x54,&DAT_0885fa24,0,(uVar3 * 2 >> 0x11 & 1) << 4);
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
LAB_080adfc2:
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

