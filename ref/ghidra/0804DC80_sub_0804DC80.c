// sub_0804DC80 at 0x0804DC80 (thumb)

undefined4 sub_0804DC80(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = param_1 + 0x4c;
  sub_0801412C(4,iVar3);
  local_18 = *(undefined4 *)(param_1 + 0x4c);
  local_14 = *(undefined4 *)(param_1 + 0x50);
  puVar2 = (uint *)(param_1 + 0xc0);
  if (*(char *)puVar2 == '\0') {
    sub_08076CD0(&local_18,0x180,*puVar2 >> 3 & 0xff);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  uVar1 = *puVar2;
  *puVar2 = uVar1 + 0x100;
  if (uVar1 + 0x100 == 0x800) {
    sub_08001EAC(0xe1);
    sub_08015698(0,iVar3);
    if (DAT_02022b2c < 9999) {
      DAT_02022b2c = DAT_02022b2c + 1;
    }
    sub_08015794(param_1,iVar3);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

