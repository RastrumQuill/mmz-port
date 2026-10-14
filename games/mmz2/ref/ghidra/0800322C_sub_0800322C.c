// sub_0800322C at 0x0800322C (thumb)

undefined4 sub_0800322C(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = &DAT_0810097c;
  iVar1 = 0xe;
  do {
    sub_080EEA9C(*puVar2,0xffff,0x100);
    puVar2 = puVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return in_lr;
}

