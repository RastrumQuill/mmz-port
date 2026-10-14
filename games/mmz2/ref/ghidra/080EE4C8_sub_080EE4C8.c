// sub_080EE4C8 at 0x080EE4C8 (thumb)

undefined8 sub_080EE4C8(char param_1,byte param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  param_3 = param_3 & 0xff;
  if (param_1 == '\x04') {
    if (param_2 < 0x15) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)(byte)(param_2 - 0x15);
      if (0x3b < uVar1) {
        uVar1 = 0x3b;
      }
    }
    uVar1 = (uint)(byte)(&DAT_080ffccc)[uVar1];
  }
  else {
    if (param_2 < 0x24) {
      param_3 = 0;
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)(byte)(param_2 - 0x24);
      if (0x82 < uVar1) {
        uVar1 = 0x82;
        param_3 = 0xff;
      }
    }
    iVar2 = (int)*(short *)(&DAT_080ffcb4 + ((byte)(&DAT_080ffc30)[uVar1] & 0xf) * 2) >>
            ((int)(uint)(byte)(&DAT_080ffc30)[uVar1] >> 4);
    uVar1 = iVar2 + ((int)((((int)*(short *)(&DAT_080ffcb4 +
                                            ((byte)(&DAT_080ffc31)[uVar1] & 0xf) * 2) >>
                            ((int)(uint)(byte)(&DAT_080ffc31)[uVar1] >> 4)) - iVar2) * param_3) >> 8
                    ) + 0x800;
  }
  return CONCAT44(in_lr,uVar1);
}

