// sub_0805EE34 at 0x0805EE34 (thumb)

undefined4 sub_0805EE34(int param_1,byte param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)param_2;
  switch(uVar1) {
  case 0:
  case 8:
  case 0x11:
  case 0x19:
  case 0x22:
  case 0x2a:
    if (*(int *)(&DAT_0885550c + (uint)*(byte *)(param_1 + 0xb8) * 4) ==
        *(int *)(&DAT_0885550c + uVar1 * 4)) goto LAB_0805ef2c;
  }
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_0885550c + uVar1 * 4));
LAB_0805ef2c:
  *(byte *)(param_1 + 0xb8) = param_2;
  return in_lr;
}

