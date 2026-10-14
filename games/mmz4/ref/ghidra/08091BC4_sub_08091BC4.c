// sub_08091BC4 at 0x08091BC4 (thumb)

undefined4 sub_08091BC4(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  int local_28;
  undefined4 local_24;
  
  iVar3 = DAT_0202dbf0;
  if (*(char *)(param_1 + 0xe) != '\0') goto LAB_08091db8;
  sub_08005784(param_1 + 0x74,&DAT_0885cdd0);
  if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
    uVar2 = 0x480;
  }
  else {
    uVar2 = 0xfffffb80;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffb00;
  if (*(char *)(param_1 + 0xbe) == '\x02') {
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    sub_080D4898(param_1 + 0x54,&DAT_0885ce4c,0,(uVar4 * 2 >> 0x11 & 1) << 4);
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    uVar4 = (uVar4 * 2 >> 0x11 & 1) << 4 | 1;
LAB_08091d2a:
    sub_080D4898(param_1 + 0x54,&DAT_0885ce4c,0,uVar4);
  }
  else {
    if (*(char *)(param_1 + 0xbe) == '\0') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar4 & 0x7fffffff;
        sub_080D4898(param_1 + 0x54,&DAT_0885ce4c,0,(uVar4 * 2 >> 0x11 & 1) << 4);
        uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar4 & 0x7fffffff;
        uVar4 = (uVar4 * 2 >> 0x11 & 1) << 4;
      }
      else {
        uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar4 & 0x7fffffff;
        sub_080D4898(param_1 + 0x54,&DAT_0885ce4c,0,(uVar4 * 2 >> 0x11 & 1) << 4 | 1);
        uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar4 & 0x7fffffff;
        uVar4 = (uVar4 * 2 >> 0x11 & 1) << 4 | 1;
      }
      goto LAB_08091d2a;
    }
    local_24 = *(undefined4 *)(param_1 + 0x58);
    local_28 = *(int *)(param_1 + 0x54) + 0x300;
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    sub_080D4898(&local_28,&DAT_0885ce68,0,(uVar4 * 2 >> 0x11 & 1) << 4);
    local_28 = local_28 + -0x600;
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    sub_080D4898(&local_28,&DAT_0885ce68,0,(uVar4 * 2 >> 0x11 & 1) << 4 | 1);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffb00;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08091db8:
  sub_0801CFF0(param_1);
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if (((*(uint *)(param_1 + 0x8c) & 4) != 0) || (sVar1 = sub_08007C7C(iVar5,iVar3), sVar1 != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

