// sub_0806E304 at 0x0806E304 (thumb)

undefined4 sub_0806E304(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0xb4);
  iVar2 = (uVar1 & 1) + ((uVar1 & 2) >> 1) + ((uVar1 & 4) >> 2) + ((uVar1 & 8) >> 3);
  if ((iVar2 == ((uVar1 & 0x10) >> 4) + ((uVar1 & 0x20) >> 5) + ((uVar1 & 0x40) >> 6) +
                ((uVar1 & 0x80) >> 7)) && (iVar2 != 0)) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0x12) = 0x3c;
  }
  return in_lr;
}

