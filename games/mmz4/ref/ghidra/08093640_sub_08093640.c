// sub_08093640 at 0x08093640 (thumb)

undefined4 sub_08093640(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_3c [3];
  short asStack_30 [6];
  byte abStack_24 [4];
  int local_20;
  int local_1c;
  
  local_3c[0] = 0x4007;
  local_3c[1] = 0x4008;
  local_3c[2] = 0x4009;
  sub_08128B5C(asStack_30,&DAT_081294c0,0xc);
  sub_08128B5C(abStack_24,&DAT_081294cc,3);
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar2 = (uint)*(byte *)(param_1 + 0xb8);
    iVar3 = uVar4 * 2;
    local_20 = *(int *)(param_1 + 0x54) + (iVar3 + -1) * (int)asStack_30[uVar2 * 2];
    local_1c = *(int *)(param_1 + 0x58) + (int)asStack_30[uVar2 * 2 + 1];
    uVar1 = (uint)abStack_24[uVar2];
    sub_080A51E0(&local_20,uVar1 + iVar3 * (0x140 - uVar1) & 0xff,uVar4);
    sub_08005784(param_1 + 0x74,&DAT_0885d058);
    sub_0801CF00(param_1,*(undefined2 *)(local_3c + uVar2));
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  sub_080947EC(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(byte *)(param_1 + 0x12) < 0x40)) {
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

