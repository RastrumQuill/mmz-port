// PollKeyInput at 0x08000EE4 (thumb)

undefined4 PollKeyInput(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 in_lr;
  
  iVar1 = 0;
  puVar2 = &DAT_02004ca4;
  do {
    ReadKeyInput(puVar2,iVar1);
    puVar2 = puVar2 + 0xc;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return in_lr;
}

