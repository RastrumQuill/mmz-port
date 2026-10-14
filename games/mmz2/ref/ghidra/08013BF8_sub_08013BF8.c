// sub_08013BF8 at 0x08013BF8 (thumb)

undefined8 sub_08013BF8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((param_1[1] < 0x64000) || (*param_1 < 0x186000)) {
    iVar2 = *param_1;
    iVar3 = param_1[1];
    if ((((iVar2 - 0xe1001U < 0x1dfff) && (iVar3 - 0x46001U < 0x13fff)) ||
        (((iVar2 - 0x11d001U < 0x1dfff && (iVar3 - 0x16001U < 0x11fff)) ||
         ((iVar2 - 0x159001U < 0x1dfff && (iVar3 - 0x3c001U < 0x13fff)))))) ||
       ((iVar2 - 0x195001U < 0x1dfff && (iVar3 - 0x16001U < 0x11fff)))) {
      uVar1 = 1;
    }
    else if ((iVar2 - 0x177001U < 0xefff) && (iVar3 - 0x27001U < 0x28fff)) {
      uVar1 = 3;
    }
    else if ((((iVar3 < 0x16001) || (0x1d1000 < iVar2)) || ((0x18d000 < iVar2 && (0x41000 < iVar3)))
             ) || ((((0x151000 < iVar2 && (0x55000 < iVar3)) || (0x5a000 < iVar3)) ||
                   ((iVar3 < 0x50000 && (iVar2 - 0xb4001U < 0x4afff)))))) {
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 5;
  }
  return CONCAT44(in_lr,uVar1);
}

