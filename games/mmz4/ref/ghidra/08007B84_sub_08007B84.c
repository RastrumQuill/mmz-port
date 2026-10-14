// sub_08007B84 at 0x08007B84 (thumb)

undefined8 sub_08007B84(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = 0x280000;
  iVar4 = *param_1;
  if (0x5effe < iVar4 - 0xa5001U) goto LAB_08007c66;
  if (0xe3fff < iVar4) {
    iVar2 = param_1[1];
    if (0x1dfff < iVar2) {
      if (iVar2 < 0x27000) {
        uVar3 = iVar4 - 0xf8001;
        uVar1 = 0xffe;
LAB_08007c5e:
        if (uVar1 < uVar3) goto LAB_08007c66;
      }
      else {
        if (iVar2 < 0x29000) {
          if (iVar4 < 0xfc000) {
            if (iVar4 + -0xf9000 < 1) {
              iVar5 = 0x27000;
            }
            else {
              iVar5 = (iVar4 + -0xf9000 >> 1) + 0x27000;
            }
          }
          goto LAB_08007c66;
        }
        if (iVar2 < 0x37000) {
          uVar3 = iVar4 - 0xf9001;
          uVar1 = 0x2ffe;
          goto LAB_08007c5e;
        }
      }
      iVar5 = 0x37000;
      goto LAB_08007c66;
    }
    if (0xf4fff < iVar4) {
      if (iVar4 < 0xf9000) {
        if (iVar4 + -0xf5000 < 1) {
          iVar5 = 0x1ac00;
        }
        else {
          iVar5 = (iVar4 + -0xf5000 >> 1) + 0x1ac00;
        }
      }
      goto LAB_08007c66;
    }
    if (0 < iVar4 + -0xf0000) {
      iVar5 = FUN_081288bc(iVar4 + -0xf0000,6);
      iVar5 = iVar5 + 0x1a000;
      goto LAB_08007c66;
    }
  }
  iVar5 = 0x1a000;
LAB_08007c66:
  return CONCAT44(in_lr,iVar5);
}

