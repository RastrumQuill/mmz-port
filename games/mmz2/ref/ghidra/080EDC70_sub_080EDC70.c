// sub_080EDC70 at 0x080EDC70 (thumb)

undefined4 sub_080EDC70(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = &DAT_0810097c;
  iVar1 = 0xe;
  do {
    sub_080EE30C(*puVar2);
    puVar2 = puVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return in_lr;
}

