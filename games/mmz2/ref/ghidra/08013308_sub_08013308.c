// sub_08013308 at 0x08013308 (thumb)

undefined8 sub_08013308(undefined param_1,byte param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = (uint)param_2;
  switch(param_1) {
  case 0:
    iVar2 = sub_0801E56C();
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x25) = 0x10;
      *(byte *)(iVar2 + 9) = param_2;
      *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(&DAT_083339f8 + uVar3 * 4);
    }
    goto LAB_080134b6;
  default:
    iVar2 = 0;
    goto LAB_080134b6;
  case 2:
    iVar2 = sub_08006B84(DAT_0202f074);
    if (iVar2 == 0) goto LAB_080134b6;
    *(undefined *)(iVar2 + 0x25) = 0x18;
    puVar1 = (undefined4 *)&DAT_0833a138;
    break;
  case 3:
    iVar2 = sub_08006B84(DAT_0202f078);
    if (iVar2 == 0) goto LAB_080134b6;
    *(undefined *)(iVar2 + 0x25) = 0x18;
    puVar1 = (undefined4 *)&DAT_0833d990;
    break;
  case 4:
    iVar2 = sub_08006B84(DAT_0202f07c);
    if (iVar2 == 0) goto LAB_080134b6;
    *(undefined *)(iVar2 + 0x25) = 8;
    puVar1 = &DAT_08343064;
    goto LAB_08013492;
  case 5:
    iVar2 = sub_08006B84(DAT_0202f084);
    if (iVar2 == 0) goto LAB_080134b6;
    *(undefined *)(iVar2 + 0x25) = 1;
    puVar1 = &DAT_08345998;
    goto LAB_08013492;
  case 6:
    iVar2 = sub_08006B50(DAT_0202f088);
    if (iVar2 == 0) goto LAB_080134b6;
    *(undefined *)(iVar2 + 0x25) = 0x1e;
    puVar1 = (undefined4 *)&DAT_0834863c;
    break;
  case 7:
    iVar2 = sub_08006B84(DAT_0202f08c);
    if (iVar2 == 0) goto LAB_080134b6;
    *(undefined *)(iVar2 + 0x25) = 1;
    puVar1 = &DAT_0834a09c;
    break;
  case 8:
    iVar2 = sub_08006B84(DAT_0202f090);
    if (iVar2 == 0) goto LAB_080134b6;
    *(undefined *)(iVar2 + 0x25) = 0x10;
    puVar1 = &DAT_0834a1a0;
LAB_08013492:
    *(byte *)(iVar2 + 9) = param_2;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)puVar1[uVar3];
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    goto LAB_080134b6;
  }
  *(byte *)(iVar2 + 9) = param_2;
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)puVar1[uVar3];
  *(undefined2 *)(iVar2 + 0x20) = 0;
  *(undefined *)(iVar2 + 0x22) = 0;
  *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
  *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
LAB_080134b6:
  return CONCAT44(in_lr,iVar2);
}

