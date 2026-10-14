// sub_08000988 at 0x08000988 (thumb)

undefined4 sub_08000988(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar1 = param_3 & 0xfffffffe;
  if (uVar1 != 0) {
    uVar2 = param_1 & 0xfffffffe;
    uVar3 = param_2 & 0xfffffffe;
    if (((param_1 & 2) == 0) && ((param_2 & 2) == 0)) {
      if ((uVar1 < 0x20) ||
         (sub_080EEF68(uVar2,uVar3,(param_3 & 0xffffffe0) >> 2 & 0x1fffff), (param_3 & 0x1e) != 0))
      {
        sub_080EEF6C(uVar2 + (param_3 & 0xffffffe0),uVar3 + (param_3 & 0xffffffe0),
                     (param_3 & 0x1e) >> 1);
      }
    }
    else {
      sub_080EEF6C(uVar2,uVar3,(uVar1 << 10) >> 0xb);
    }
  }
  return in_lr;
}

