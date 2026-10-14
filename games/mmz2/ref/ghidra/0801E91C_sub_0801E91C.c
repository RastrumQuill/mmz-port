// sub_0801E91C at 0x0801E91C (thumb)

undefined8 sub_0801E91C(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = (uint)(byte)(&DAT_08333a54)[*(byte *)(param_1 + 9)];
  if ((*(byte *)(param_1 + 0x196) & (&DAT_08333a54)[*(byte *)(param_1 + 9)]) == 0) {
    iVar2 = (uint)*(byte *)(param_1 + 9) * 2;
    uVar1 = sub_0801EDD8(param_1,(&DAT_08333a60)[iVar2],(&DAT_08333a61)[iVar2]);
    uVar1 = uVar1 & 0xff;
    if (uVar1 == 0) {
      uVar1 = 0;
      goto LAB_0801e972;
    }
  }
  *(char *)(param_1 + 0x186) = (char)uVar1;
LAB_0801e972:
  return CONCAT44(in_lr,uVar1);
}

