// sub_0808C348 at 0x0808C348 (thumb)

undefined8 sub_0808C348(int param_1,short param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\v') {
    *(undefined *)(param_1 + 0xd) = 0xb;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(int *)(param_1 + 0x5c) = param_3;
  *(int *)(param_1 + 0x60) = param_4;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_4;
  cVar1 = sub_0808BD9C(param_1);
  if ((param_2 == 0) || ((cVar1 != '\0' && (cVar1 != '\x02')))) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

