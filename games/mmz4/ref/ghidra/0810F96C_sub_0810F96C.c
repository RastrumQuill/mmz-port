// sub_0810F96C at 0x0810F96C (thumb)

undefined4 sub_0810F96C(int param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  undefined4 in_lr;
  
  psVar2 = (short *)sub_08000A70(0x140);
  if (psVar2 != (short *)0x0) {
    DAT_03001724 = &DAT_0400001c;
    DAT_03001728 = 0xa2600001;
    sVar1 = (short)((*(short *)((int)&DAT_08128c10 + (param_1 * 0x4000000 + 0x40000000U >> 0x17)) +
                    0x100) * 0xf >> 5);
    DAT_03001720 = psVar2;
    *psVar2 = sVar1 + -0xf0;
    psVar2[1] = 0xf0 - sVar1;
    iVar4 = 0x9c;
    psVar3 = psVar2;
    do {
      psVar3 = psVar3 + 2;
      *psVar3 = *psVar2;
      iVar4 = iVar4 + -2;
    } while (-1 < iVar4);
    psVar3 = psVar2 + 3;
    iVar4 = 0x9c;
    do {
      *psVar3 = psVar2[1];
      psVar3 = psVar3 + 2;
      iVar4 = iVar4 + -2;
    } while (-1 < iVar4);
  }
  return in_lr;
}

