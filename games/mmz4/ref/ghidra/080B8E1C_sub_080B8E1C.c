// sub_080B8E1C at 0x080B8E1C (thumb)

undefined4 sub_080B8E1C(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined4 local_78 [4];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  int aiStack_5c [15];
  int local_20;
  
  local_78[0] = 0xbb02;
  local_78[1] = 0xbb03;
  local_78[2] = 0xbb04;
  local_78[3] = 0xbb05;
  uStack_68 = 0xbb06;
  uStack_64 = 0xbb07;
  local_60 = 0xbb08;
  sub_08128B5C(aiStack_5c,&DAT_081298c4,0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08860df0);
    sub_0801CF00(param_1,0xbb02);
    *(undefined4 *)(param_1 + 100) = 0x46;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar5 = *(undefined4 *)(param_1 + 100);
  iVar2 = FUN_081288bc(uVar5,10);
  uVar6 = 7U - iVar2 & 0xff;
  if (6 < uVar6) {
    uVar6 = 6;
  }
  iVar2 = sub_08128954(uVar5,10);
  if (iVar2 == 0) {
    sub_0801CF00(param_1,*(undefined2 *)(local_78 + uVar6));
  }
  if ((*(uint *)(param_1 + 100) & 3) == 0) {
    sub_08002B10(0x13c);
    iVar2 = FUN_081288bc(*(int *)(param_1 + 100) * 0x3c,0x46);
    uVar3 = FUN_081288bc((iVar2 + 0x96) * 0x100,0x168);
    iVar2 = (bVar1 >> 4 & 1) * 2;
    aiStack_5c[14] = *(int *)(param_1 + 0x54) + aiStack_5c[uVar6 * 2] * (iVar2 + -1);
    local_20 = *(int *)(param_1 + 0x58) + aiStack_5c[uVar6 * 2 + 1];
    sub_080CF904(uVar4,aiStack_5c + 0xe,(uVar3 & 0xff) + iVar2 * (0x140 - (uVar3 & 0xff)) & 0xff,0);
  }
  sub_0801CFF0(param_1);
  iVar2 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar2;
  if (iVar2 == 0) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

