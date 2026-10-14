// sub_080A8EA4 at 0x080A8EA4 (thumb)

undefined4 sub_080A8EA4(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x6cf7) {
      iVar4 = param_1 + 0x54;
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      pbVar5 = (byte *)(param_1 + 0xbc);
      sub_080D4898(iVar4,&DAT_0885f304,0,(uVar3 * 2 >> 0x11 & 1) << 4 | (uint)*pbVar5);
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(iVar4,&DAT_0885f320,0,(uVar3 * 2 >> 0x11 & 1) << 4 | (uint)*pbVar5);
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(iVar4,&DAT_0885f33c,0,(uVar3 * 2 >> 0x11 & 1) << 4 | (uint)*pbVar5);
    }
    else {
      iVar4 = param_1 + 0x54;
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      pbVar5 = (byte *)(param_1 + 0xbc);
      sub_080D4898(iVar4,&DAT_0885f358,0,(uVar3 * 2 >> 0x11 & 1) << 4 | (uint)*pbVar5);
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(iVar4,&DAT_0885f374,0,(uVar3 * 2 >> 0x11 & 1) << 4 | (uint)*pbVar5);
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D4898(iVar4,&DAT_0885f390,0,(uVar3 * 2 >> 0x11 & 1) << 4 | (uint)*pbVar5);
    }
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    pcVar2 = (char *)(iVar1 + 0xe3);
    *pcVar2 = *pcVar2 + -1;
    *(undefined *)(iVar1 + 0xcc + (uint)*(byte *)(param_1 + 0x10)) = 1;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885f2c8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

