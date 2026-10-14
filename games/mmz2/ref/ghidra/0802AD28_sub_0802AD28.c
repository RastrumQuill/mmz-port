// sub_0802AD28 at 0x0802AD28 (thumb)

undefined4 sub_0802AD28(int param_1)

{
  undefined uVar1;
  uint uVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x178) == '\x06') {
    uVar2 = (uint)*(byte *)(param_1 + 0x179);
  }
  else {
    uVar2 = 0;
  }
  sub_080EF118(param_1,(&DAT_08333d34)[uVar2]);
  psVar3 = (short *)(param_1 + 0x178);
  if (*(char *)psVar3 == '\x06') {
    sub_08036B54(param_1);
  }
  else if (*psVar3 != 4) {
    return in_lr;
  }
  uVar7 = 0;
  uVar2 = sub_08036AB8(param_1,&DAT_08335d44);
  if (((int)uVar2 < 0) || (*(int *)(&DAT_08333cb4 + uVar2 * 4) == 0)) {
    uVar7 = 1;
    uVar2 = (uint)*(byte *)(param_1 + 0x177);
  }
  else {
    *(char *)(param_1 + 0x177) = (char)uVar2;
  }
  uVar1 = (&DAT_08335c94)[uVar2];
  sub_08035D84(param_1,uVar1,*(undefined *)(param_1 + 0x17f));
  uVar4 = sub_08035ED0(param_1,uVar1,0,uVar2);
  iVar5 = sub_08035F60(param_1,uVar4);
  *(int *)(param_1 + 0x2d4) = iVar5;
  iVar5 = *(int *)(param_1 + 0x2c4) - iVar5;
  iVar6 = -1;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar6 = 1;
  }
  uVar7 = uVar7 | (uint)(iVar6 * iVar5) >> 0x1f;
  iVar6 = sub_08035F74(param_1,uVar4);
  *(int *)(param_1 + 0x2d8) = iVar6;
  iVar6 = *(int *)(param_1 + 0x2c8) - iVar6;
  if (0x10000000 < iVar5 * iVar5 + iVar6 * iVar6) {
    uVar7 = 1;
  }
  if (uVar7 != 0) {
    *(char *)(param_1 + 0x17c) = *(char *)psVar3;
    *(char *)psVar3 = '\x04';
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    sub_08036B0C(param_1,0,0,0);
  }
  return in_lr;
}

