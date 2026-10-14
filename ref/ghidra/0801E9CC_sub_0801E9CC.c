// sub_0801E9CC at 0x0801E9CC (thumb)

undefined8 sub_0801E9CC(int param_1)

{
  undefined uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar2 = *(ushort *)(param_1 + 0x90) & 0x80;
  if ((*(ushort *)(param_1 + 0x90) & 0x80) == 0) {
    uVar1 = (undefined)uVar2;
    *(undefined *)(param_1 + 0x45) = uVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x129) = uVar1;
    sub_0801DCD4(param_1);
    uVar3 = (uint)*(byte *)(param_1 + 0xd);
    if (uVar3 == 5) {
      *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = uVar1;
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      *(ushort *)(param_1 + 0xe) = uVar2;
      *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
      *(undefined *)(param_1 + 0xbe) = 0;
      *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
      *(undefined *)(param_1 + 0xbf) = 0;
      *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
      *(undefined *)(param_1 + 0xc0) = 0;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 5;
  }
  return CONCAT44(in_lr,uVar3);
}

