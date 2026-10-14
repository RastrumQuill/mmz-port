// sub_080D90F0 at 0x080D90F0 (thumb)

undefined4 sub_080D90F0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  piVar2 = (int *)(param_1 + 200);
  iVar5 = param_1 + 0x54;
  iVar3 = sub_080D635C(param_1,*piVar2,iVar5,&local_28,0);
  if (iVar3 == *piVar2) {
    iVar6 = *(int *)(param_1 + 0x5c);
    iVar7 = local_28 - *(int *)(param_1 + 0x54);
    iVar4 = local_24 - *(int *)(param_1 + 0x58);
    if (((((uint)(iVar7 + iVar6) <= (uint)(iVar6 * 2)) &&
         ((uint)(iVar4 + iVar6) <= (uint)(iVar6 * 2))) &&
        (iVar7 * iVar7 + iVar4 * iVar4 <= iVar6 * iVar6)) &&
       (cVar1 = sub_08038ED4(iVar5,&local_28),
       (byte)((cVar1 - *(char *)(param_1 + 0xc4)) + 0x40U) < 0x81)) {
      *(int *)(param_1 + 0x54) = local_28;
      *(int *)(param_1 + 0x58) = local_24;
      iVar3 = sub_080D635C(param_1,iVar3,iVar5,&local_28,1);
      if (iVar3 == *piVar2) {
        *(undefined *)(param_1 + 0xe) = 2;
        *(undefined2 *)(param_1 + 0xc6) = 0xb4;
        *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) | 0x80;
        return in_lr;
      }
      *(undefined *)(param_1 + 0xe) = 3;
      *(undefined2 *)(param_1 + 0xc6) = 0x3c;
      return in_lr;
    }
    sub_080D52B4(param_1 + 0x54,&local_28,param_1 + 0x5c,(char *)(param_1 + 0xc4),0x500,0x500,0x800,
                 0x500,0x70,0xe0,4);
  }
  else {
    sub_080D93AC(param_1);
    sub_080D8ED8(param_1);
  }
  return in_lr;
}

