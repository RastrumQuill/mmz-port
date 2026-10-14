// sub_0805B898 at 0x0805B898 (thumb)

undefined8 sub_0805B898(uint param_1,uint param_2)

{
  ushort *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  puVar1 = &DAT_080feba8;
  do {
    if (*puVar1 == param_2) {
      iVar2 = sub_080FE390(iVar2 + 1,3);
      param_1 = (uint)(ushort)(&DAT_080feba8)[iVar2];
      break;
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return CONCAT44(in_lr,param_1);
}

