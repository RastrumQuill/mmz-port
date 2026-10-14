// sub_080BB5FC at 0x080BB5FC (thumb)

undefined8 sub_080BB5FC(undefined4 param_1,undefined param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = sub_080B4660(param_2);
  cVar2 = sub_080B4634(cVar1,param_2);
  iVar3 = sub_080B470C(param_1,param_2);
  return CONCAT44(in_lr,(uint)*(ushort *)
                               (((iVar3 << 0x18) >> 0x17) +
                               cVar2 * 6 + *(int *)(&DAT_082b8e50 + cVar1 * 4)));
}

