// sub_0806209C at 0x0806209C (thumb)

undefined4 sub_0806209C(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  local_10 = *(undefined4 *)(param_1 + 0x4c);
  local_c = *(int *)(param_1 + 0x50) + -0x1000;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080914D4(param_1,&local_10,1,5);
    sub_080914D4(param_1,&local_10,1,0);
    sub_080914D4(param_1,&local_10,1,1);
    sub_080914D4(param_1,&local_10,1,2);
    sub_080914D4(param_1,&local_10,1,3);
    sub_080914D4(param_1,&local_10,1,4);
  }
  else {
    sub_080914D4(param_1,&local_10,2,5);
    sub_080914D4(param_1,&local_10,2,0);
    sub_080914D4(param_1,&local_10,2,1);
    sub_080914D4(param_1,&local_10,2,2);
    sub_080914D4(param_1,&local_10,2,3);
    sub_080914D4(param_1,&local_10,2,4);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

