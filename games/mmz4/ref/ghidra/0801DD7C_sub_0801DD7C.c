// sub_0801DD7C at 0x0801DD7C (thumb)

undefined8 sub_0801DD7C(undefined param_1,byte param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(param_1) {
  case 0:
    iVar2 = sub_0802B460();
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x25) = 0x10;
      *(byte *)(iVar2 + 9) = param_2;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(&DAT_0884f904)[param_2];
    }
    goto LAB_0801df2a;
  default:
    iVar2 = 0;
    goto LAB_0801df2a;
  case 2:
    iVar2 = sub_08005500(DAT_0202ed8c);
    if (iVar2 == 0) goto LAB_0801df2a;
    *(undefined *)(iVar2 + 0x25) = 0x18;
    puVar1 = (undefined4 *)&DAT_08854834;
    break;
  case 3:
    iVar2 = sub_08005500(DAT_0202ed90);
    if (iVar2 == 0) goto LAB_0801df2a;
    *(undefined *)(iVar2 + 0x25) = 0x18;
    puVar1 = (undefined4 *)&DAT_0885a604;
    break;
  case 4:
    iVar2 = sub_08005500(DAT_0202ed94);
    if (iVar2 == 0) goto LAB_0801df2a;
    *(undefined *)(iVar2 + 0x25) = 8;
    puVar1 = &DAT_088614b8;
    goto LAB_0801df06;
  case 5:
    iVar2 = sub_08005500(DAT_0202ed9c);
    if (iVar2 == 0) goto LAB_0801df2a;
    *(undefined *)(iVar2 + 0x25) = 1;
    puVar1 = &DAT_08863a28;
    goto LAB_0801df06;
  case 6:
    iVar2 = sub_080054CC(DAT_0202eda0);
    if (iVar2 == 0) goto LAB_0801df2a;
    *(undefined *)(iVar2 + 0x25) = 0x1e;
    puVar1 = (undefined4 *)&DAT_08865dc4;
    break;
  case 7:
    iVar2 = sub_08005500(DAT_0202eda4);
    if (iVar2 == 0) goto LAB_0801df2a;
    *(undefined *)(iVar2 + 0x25) = 1;
    puVar1 = &DAT_08868f54;
    break;
  case 8:
    iVar2 = sub_08005500(DAT_0202edb0);
    if (iVar2 == 0) goto LAB_0801df2a;
    *(undefined *)(iVar2 + 0x25) = 0x10;
    puVar1 = &DAT_08869378;
LAB_0801df06:
    *(byte *)(iVar2 + 9) = param_2;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)puVar1[param_2];
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    goto LAB_0801df2a;
  }
  *(byte *)(iVar2 + 9) = param_2;
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)puVar1[param_2];
  *(undefined2 *)(iVar2 + 0x20) = 0;
  *(undefined *)(iVar2 + 0x22) = 0;
  *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
  *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
LAB_0801df2a:
  return CONCAT44(in_lr,iVar2);
}

