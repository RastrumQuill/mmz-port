// sub_080C3110 at 0x080C3110 (thumb)

undefined8 sub_080C3110(undefined4 *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = (int)param_2;
  if (iVar2 < 0) {
    *param_1 = 2;
    cVar1 = sub_080C3B64(param_1,iVar2);
  }
  else {
    cVar1 = sub_080C8A9C(param_1,iVar2,
                         *(undefined4 *)(&DAT_082cc180 + (uint)*(byte *)((int)param_1 + 1) * 4));
  }
  return CONCAT44(in_lr,(int)cVar1);
}

