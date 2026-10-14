// sub_0801E834 at 0x0801E834 (thumb)

undefined8 sub_0801E834(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x80) == 0) {
    *(byte *)(param_1 + 0x45) = (byte)*(ushort *)(param_1 + 0x90) & 0x80;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    if (((*(byte *)(param_1 + 0x12d) & 0x20) == 0) ||
       ((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 1) != 0)) {
      uVar1 = 3;
    }
    else {
      if ((*(short *)(param_1 + 0xe) == 0x201) || (*(short *)(param_1 + 0xe) == 2)) {
        iVar2 = sub_08018D7C(param_1,6,0);
        if ((*(byte *)(param_1 + 0x17a) & 4) == 0) {
          iVar3 = 0x200;
        }
        else {
          iVar3 = 0x280;
        }
        *(uint *)(param_1 + 0x50) =
             (*(int *)(param_1 + 0x50) -
             ((uint)*(ushort *)(iVar2 + 4) +
             (int)(((uint)*(ushort *)(iVar2 + 4) - (uint)*(ushort *)(iVar2 + 6)) + 0x100) / 2)) +
             iVar3;
      }
      *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
      *(undefined *)(param_1 + 0xbe) = 0;
      *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
      *(undefined *)(param_1 + 0xbf) = 0;
      *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
      *(undefined *)(param_1 + 0xc0) = 0;
      uVar1 = 1;
    }
  }
  else {
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 0;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    uVar1 = 5;
  }
  return CONCAT44(in_lr,uVar1);
}

