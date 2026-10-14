// sub_080ACEDC at 0x080ACEDC (thumb)

undefined4 sub_080ACEDC(int param_1)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_30 [4];
  byte abStack_20 [4];
  int local_1c;
  undefined4 local_18;
  
  local_30[0] = 0x9c06;
  local_30[1] = 0x9c0a;
  local_30[2] = 0x9c0e;
  local_30[3] = 0x9c12;
  sub_08128B5C(abStack_20,&DAT_08129710,4);
  iVar5 = *(int *)(param_1 + 0x28);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  uVar3 = (uint)abStack_20[uVar4];
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_1c = *(int *)(param_1 + 0x54) + (uVar3 * 2 + -1) * 0x1400;
    local_18 = *(undefined4 *)(param_1 + 0x58);
    sub_080E8520(*(undefined4 *)(iVar5 + 0x28),&local_1c,0);
    sub_0801CF00(param_1,*(undefined2 *)(local_30 + uVar4));
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0x12) != '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
    local_1c = *(int *)(param_1 + 0x54) + uVar3 * 0x1000 + -0x800;
    local_18 = *(undefined4 *)(param_1 + 0x58);
    sub_080CCEF8(&local_1c,0,uVar3);
  }
  pbVar2 = (byte *)(iVar5 + 0xb5);
  *pbVar2 = (byte)(1 << uVar4) | *pbVar2;
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

