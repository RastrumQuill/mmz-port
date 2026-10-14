// sub_080C4798 at 0x080C4798 (thumb)

undefined8 sub_080C4798(undefined4 *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = (int)param_2;
  if (iVar2 < 0) {
    *param_1 = 2;
    cVar1 = sub_080C4B48(param_1,iVar2);
  }
  else {
    cVar1 = sub_080C8A9C(param_1,iVar2,
                         *(undefined4 *)(&DAT_082cc318 + (uint)*(byte *)((int)param_1 + 1) * 4));
    sub_08001904(0x76,0);
    sub_08001904(0x77,0);
    sub_080B498C(param_1[4],(int)*(char *)(param_1 + 1),param_1[6]);
  }
  return CONCAT44(in_lr,(int)cVar1);
}

