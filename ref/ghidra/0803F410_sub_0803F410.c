// sub_0803F410 at 0x0803F410 (thumb)

undefined4 sub_0803F410(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 uStack_4;
  
  uStack_4 = in_lr;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    iVar4 = 4;
    local_24 = &local_34;
    do {
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      uVar2 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      local_34 = (uVar3 * 2 >> 0x11 & 0xf) * 0x100 + *(int *)(param_1 + 0x4c) +
                 (uVar2 * 2 >> 0x11 & 0x1f) * -0x100;
      uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
      uVar2 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar2 & 0x7fffffff;
      *(uint *)((int)local_24 + 4) =
           (uVar3 * 2 >> 0x11 & 0xf) * 0x100 + *(int *)(param_1 + 0x50) +
           (uVar2 * 2 >> 0x11 & 0x1f) * -0x100;
      sub_0808827C(1,&local_34);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    sub_08001EAC(2);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    local_34 = *(int *)(param_1 + 0x4c);
    local_30 = *(undefined4 *)(param_1 + 0x50);
    local_2c = 0xffffff40;
    local_28 = 0xfffffc40;
    sub_08082614(param_1,&local_34,&local_2c,0);
    local_2c = 0xfffffe80;
    local_28 = 0xfffffd80;
    sub_08082614(param_1,&local_34,&local_2c,0);
    local_2c = 0x80;
    local_28 = 0xfffffce0;
    sub_08082614(param_1,&local_34,&local_2c,1);
    local_2c = 0x160;
    local_28 = 0xfffffd00;
    sub_08082614(param_1,&local_34,&local_2c,1);
    break;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0xb4;
    break;
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    DAT_02022b6e = DAT_02022b6e | 2;
    sub_08015698(0x17,param_1 + 0x4c);
    break;
  default:
    goto switchD_0803f42e_caseD_4;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0803f42e_caseD_4:
  return uStack_4;
}

