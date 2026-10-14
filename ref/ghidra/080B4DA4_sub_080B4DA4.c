// sub_080B4DA4 at 0x080B4DA4 (thumb)

undefined8 sub_080B4DA4(undefined4 param_1,uint param_2,undefined param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = sub_080C8CB0(param_3,10);
  uVar2 = sub_080C8C38(param_3,10);
  return CONCAT44(in_lr,(uint)*(byte *)((uVar2 & 0xff) * 10 +
                                        *(int *)(&DAT_082b7580 + (param_2 & 0xff) * 4) +
                                       (uVar1 & 0xff)));
}

