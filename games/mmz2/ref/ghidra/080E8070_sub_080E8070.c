// sub_080E8070 at 0x080E8070 (thumb)

undefined4 sub_080E8070(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) == '\0') {
    *(undefined *)(param_1 + 3) = 1;
    uVar6 = (uint)*(byte *)(param_1 + 0xde4);
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0835e510 + uVar6 * 4));
    uVar5 = (uint)*(byte *)(param_1 + 0xde5);
    if (((uVar5 == 3) && (uVar6 == 0)) ||
       (((uVar5 != 0 || (iVar7 = -1, uVar6 != 3)) && (iVar7 = -1, uVar5 < uVar6)))) {
      iVar7 = 1;
    }
    iVar3 = *(int *)(param_1 + 0xde8);
    iVar4 = iVar7 * 0x10000 + iVar3;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x20000;
      iVar3 = iVar3 + 0x20000;
      *(int *)(param_1 + 0xde8) = iVar3;
      sub_080EF11C(param_1,iVar3,*(undefined4 *)(&DAT_0835e520 + uVar5 * 4));
    }
    sub_080EF11C(param_1,iVar4,*(undefined4 *)(&DAT_0835e520 + uVar6 * 4));
    *(int *)(param_1 + 0xdec) = iVar7 << 0xc;
    sub_080032EC(0xfd);
    sub_080E8170(param_1);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xde5);
    iVar7 = (uint)bVar1 * 4;
    cVar2 = sub_080EF11C(*(undefined4 *)(param_1 + 0xdd4 + iVar7),0,
                         *(undefined4 *)(&DAT_0835e4fc + iVar7));
    *(short *)(param_1 + 4) = (short)cVar2;
    sub_080E8768(param_1,0xffffffff,(int)(char)bVar1);
  }
  return in_lr;
}

