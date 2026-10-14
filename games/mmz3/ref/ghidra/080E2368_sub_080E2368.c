// sub_080E2368 at 0x080E2368 (thumb)

undefined4 sub_080E2368(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x54);
  local_c = *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x58);
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar2 = 0xc0;
  }
  else {
    uVar2 = 0x180;
  }
  cVar1 = sub_080E1094(param_1 + 0xbc,param_1 + 100,&local_10,param_1 + 0xba,uVar2);
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + 1U & 3;
  }
  return in_lr;
}

