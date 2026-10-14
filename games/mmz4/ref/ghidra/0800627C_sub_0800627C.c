// sub_0800627C at 0x0800627C (thumb)

undefined4 sub_0800627C(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar1 = 0;
  do {
    uVar5 = uVar1 + 1;
    if (((int)(uint)DAT_030032e1 >> (uVar1 & 0xff) & 1U) != 0) {
      for (piVar4 = (int *)(&DAT_030038f0)[uVar1]; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
        *(byte *)(piVar4[2] + 0x23) = *(byte *)(piVar4[2] + 0x23) & 0xf;
        iVar3 = piVar4[2];
        if (*(short *)(iVar3 + 0x30) == 0) {
          uVar1 = *(uint *)(iVar3 + 0x18);
          uVar2 = 0x200;
        }
        else {
          *(undefined2 *)(iVar3 + 0x30) = 0;
          iVar3 = piVar4[2];
          uVar1 = *(uint *)(iVar3 + 0x18);
          uVar2 = 0x201;
        }
        *(uint *)(iVar3 + 0x18) = uVar1 | uVar2;
      }
    }
    uVar1 = uVar5;
  } while ((int)uVar5 < 3);
  return in_lr;
}

