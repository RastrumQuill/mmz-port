// sub_080DC72C at 0x080DC72C (thumb)

undefined4 sub_080DC72C(int param_1)

{
  undefined uVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar3 = sub_080DCCAC();
  *(undefined *)(param_1 + 0xe) = 1;
  uVar1 = *(undefined *)(param_1 + 0x1e);
  uVar2 = *(undefined *)(param_1 + 0x70);
  sub_080126A0(param_1);
  sub_080127E4(param_1,CONCAT11(uVar1,uVar2));
  sub_080128D4(param_1);
  uVar4 = sub_080D5880(*(undefined *)(param_1 + 0x11),*(undefined *)(param_1 + 0x12));
  if (((int)(uint)*(byte *)(iVar3 + 0x233 + ((uVar4 << 0x18) >> 0x1b)) >> (uVar4 & 7) & 1U) == 0) {
    sub_08012CA4(param_1,5);
  }
  else {
    sub_08012CA4(param_1,4);
  }
  *(undefined *)(param_1 + 0x13) = 0;
  return in_lr;
}

