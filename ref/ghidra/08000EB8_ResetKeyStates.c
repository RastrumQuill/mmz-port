// ResetKeyStates at 0x08000EB8 (thumb)

undefined4 ResetKeyStates(void)

{
  int iVar1;
  undefined4 in_lr;
  undefined2 *puVar2;
  
  DAT_02004ca0 = 0;
  puVar2 = &DAT_02004ca4;
  iVar1 = 1;
  do {
    ResetKeyState(puVar2);
    *(undefined *)(puVar2 + 10) = 0x18;
    *(undefined *)((int)puVar2 + 0x15) = 4;
    puVar2 = puVar2 + 0xc;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return in_lr;
}

