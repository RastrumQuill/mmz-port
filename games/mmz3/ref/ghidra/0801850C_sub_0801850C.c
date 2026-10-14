// sub_0801850C at 0x0801850C (thumb)

undefined8 sub_0801850C(undefined param_1,byte param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = (uint)param_2;
  switch(param_1) {
  case 0:
    iVar2 = sub_0802582C();
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x25) = 0x10;
      *(byte *)(iVar2 + 9) = param_2;
      *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(&DAT_0835ab9c + uVar3 * 4);
    }
    goto LAB_080186ba;
  default:
    iVar2 = 0;
    goto LAB_080186ba;
  case 2:
    iVar2 = sub_0800710C(DAT_020305e4);
    if (iVar2 == 0) goto LAB_080186ba;
    *(undefined *)(iVar2 + 0x25) = 0x18;
    puVar1 = (undefined4 *)&DAT_0835e0e8;
    break;
  case 3:
    iVar2 = sub_0800710C(DAT_020305e8);
    if (iVar2 == 0) goto LAB_080186ba;
    *(undefined *)(iVar2 + 0x25) = 0x18;
    puVar1 = (undefined4 *)&DAT_08362110;
    break;
  case 4:
    iVar2 = sub_0800710C(DAT_020305f8);
    if (iVar2 == 0) goto LAB_080186ba;
    *(undefined *)(iVar2 + 0x25) = 8;
    puVar1 = &DAT_083670d4;
    goto LAB_08018696;
  case 5:
    iVar2 = sub_0800710C(DAT_0203062c);
    if (iVar2 == 0) goto LAB_080186ba;
    *(undefined *)(iVar2 + 0x25) = 1;
    puVar1 = &DAT_0836a0c8;
    goto LAB_08018696;
  case 6:
    iVar2 = sub_080070D8(DAT_02030630);
    if (iVar2 == 0) goto LAB_080186ba;
    *(undefined *)(iVar2 + 0x25) = 0x1e;
    puVar1 = (undefined4 *)&DAT_0836c2ec;
    break;
  case 7:
    iVar2 = sub_0800710C(DAT_02030634);
    if (iVar2 == 0) goto LAB_080186ba;
    *(undefined *)(iVar2 + 0x25) = 1;
    puVar1 = &DAT_0836e1d8;
    break;
  case 8:
    iVar2 = sub_0800710C(DAT_02030638);
    if (iVar2 == 0) goto LAB_080186ba;
    *(undefined *)(iVar2 + 0x25) = 0x10;
    puVar1 = &DAT_0836e24c;
LAB_08018696:
    *(byte *)(iVar2 + 9) = param_2;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)puVar1[uVar3];
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    goto LAB_080186ba;
  }
  *(byte *)(iVar2 + 9) = param_2;
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)puVar1[uVar3];
  *(undefined2 *)(iVar2 + 0x20) = 0;
  *(undefined *)(iVar2 + 0x22) = 0;
  *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
  *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
LAB_080186ba:
  return CONCAT44(in_lr,iVar2);
}

