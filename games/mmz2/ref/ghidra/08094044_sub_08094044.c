// sub_08094044 at 0x08094044 (thumb)

undefined4 sub_08094044(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = param_1 + 0x54;
  sub_08015518(4,iVar3);
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(undefined4 *)(param_1 + 0x58);
  puVar2 = (uint *)(param_1 + 0xbc);
  if (*(char *)puVar2 == '\0') {
    sub_080ABA98(&local_18,0x180,*puVar2 >> 3 & 0xff);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  uVar1 = *puVar2;
  *puVar2 = uVar1 + 0x100;
  if (uVar1 + 0x100 == 0x800) {
    sub_080032EC(0x35);
    sub_0801DD2C(0,iVar3);
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,iVar3);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

