// sub_080BE548 at 0x080BE548 (thumb)

undefined4 sub_080BE548(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08861900);
    sub_0801CF00(param_1,0x9100);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  bVar4 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar4;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if ((bVar4 & 3) == 0) {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    sub_080E2334(&local_1c,0,bVar1 >> 4 & 1);
  }
  piVar5 = (int *)(param_1 + 0xb4);
  if (*piVar5 == 0) {
    iVar2 = sub_080BE39C(uVar6,param_1,param_1 + 0x54);
    *piVar5 = iVar2;
  }
  else if ((*(uint *)(*piVar5 + 0x8c) & 0x800) != 0) {
    *piVar5 = 0;
  }
  uVar3 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x3000 < uVar3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

