// sub_0802B5AC at 0x0802B5AC (thumb)

undefined8 sub_0802B5AC(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  puVar4 = (ushort *)(param_1 + 0xa4);
  uVar1 = *puVar4;
  uVar2 = sub_0802B604(param_1);
  if ((short)uVar1 < (short)(uVar2 & 0xff)) {
    *puVar4 = *puVar4 + 1;
    sub_08002B10(0x1f);
    uVar1 = *puVar4;
    uVar2 = sub_0802B604(param_1);
    if (uVar1 != (uVar2 & 0xff)) {
      uVar3 = 1;
      goto LAB_0802b5ea;
    }
  }
  uVar3 = 0;
LAB_0802b5ea:
  return CONCAT44(in_lr,uVar3);
}

