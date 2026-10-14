// sub_0801E960 at 0x0801E960 (thumb)

undefined4 sub_0801E960(int param_1)

{
  undefined4 uVar1;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x80) == 0) {
    *(byte *)(param_1 + 0x45) = (byte)*(ushort *)(param_1 + 0x90) & 0x80;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    uVar1 = 4;
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
  return uVar1;
}

