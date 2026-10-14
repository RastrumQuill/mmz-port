// sub_080DD070 at 0x080DD070 (thumb)

undefined8 sub_080DD070(undefined4 param_1,undefined param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = sub_080D58D0(param_2);
  cVar2 = sub_080D58A8((int)cVar1,param_2);
  iVar3 = sub_080D5968(param_1,param_2);
  return CONCAT44(in_lr,(uint)*(ushort *)
                               (((iVar3 << 0x18) >> 0x17) +
                               cVar2 * 6 + *(int *)(&DAT_0834c2f0 + cVar1 * 4)));
}

