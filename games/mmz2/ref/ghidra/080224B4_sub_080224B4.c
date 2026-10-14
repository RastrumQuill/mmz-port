// sub_080224B4 at 0x080224B4 (thumb)

undefined8 sub_080224B4(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  bool bVar3;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x14);
  if (param_2 == 0) {
    uVar2 = 0;
    goto LAB_08022532;
  }
  if (((param_2 & 0x80) != 0) && (bVar3 = param_3 == 0, param_3 = param_2, bVar3)) {
    uVar2 = 0;
  }
  if (param_3 == 0) goto LAB_08022532;
  if (((param_3 & 0xffffff7f) == 0xf) || ((param_3 & 0xffffff7f) == 0xe)) {
    if ((param_3 & 0xffffff7f) == 0xf) {
      uVar2 = uVar2 | 4;
    }
    if ((param_3 & 0xffffff7f) == 0xe) {
      uVar1 = 8;
      goto LAB_080224fc;
    }
  }
  else {
    uVar1 = 2;
LAB_080224fc:
    uVar2 = uVar2 | uVar1;
  }
  if ((param_3 & 0x8000) == 0) {
    uVar2 = uVar2 & 0xffff7fff;
  }
  else {
    uVar2 = uVar2 | 0x8000;
  }
  if ((param_2 & 0x1000) == 0) {
    uVar2 = uVar2 & 0xffffefff;
  }
  else {
    uVar2 = uVar2 | 0x1000;
  }
LAB_08022532:
  return CONCAT44(in_lr,uVar2);
}

