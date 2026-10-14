// sub_080BBBC0 at 0x080BBBC0 (thumb)

undefined8 sub_080BBBC0(int param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (((*(char *)(*(int *)(param_1 + 0x20) + 2) == '\x01') && (param_3 - 1 < 0x4e)) &&
     ((((int)(uint)*(byte *)(param_2 + 0x1ae + (param_3 >> 3)) >> (param_3 & 7) & 1U) == 0 ||
      (cVar1 = sub_080B47D8(param_2,param_3 & 0xff), cVar1 != '\0')))) {
    if (param_3 != param_4) {
      sub_080033F0(param_1 + 0x6c,0);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar2);
}

