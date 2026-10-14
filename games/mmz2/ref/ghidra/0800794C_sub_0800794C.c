// sub_0800794C at 0x0800794C (thumb)

undefined4 sub_0800794C(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar1 = 0;
  do {
    uVar4 = uVar1 + 1;
    if (((int)(uint)DAT_030032e1 >> (uVar1 & 0xff) & 1U) != 0) {
      for (piVar3 = (int *)(&DAT_030038f0)[uVar1]; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
        iVar2 = piVar3[2];
        if (*(short *)(iVar2 + 0x30) == 0) {
          uVar1 = *(uint *)(iVar2 + 0x18) | 0x200;
        }
        else {
          *(undefined2 *)(iVar2 + 0x30) = 0;
          iVar2 = piVar3[2];
          uVar1 = *(uint *)(iVar2 + 0x18) | 0x201;
        }
        *(uint *)(iVar2 + 0x18) = uVar1;
      }
    }
    uVar1 = uVar4;
  } while ((int)uVar4 < 3);
  return in_lr;
}

